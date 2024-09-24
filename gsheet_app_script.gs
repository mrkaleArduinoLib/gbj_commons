function doGet(e) {
  var sheet_id = '<Update Sheet Id>';
  var result = "";
  var output = "";
  // Debugging in editor
  if (e == undefined) {
    e = {"parameter": {clearData:'true', tag:"T", key:"test", value:"Test"}};
    console.log("DEBUG e:" + JSON.stringify(e));
  }
  else {
    console.log("INPUT e:" + JSON.stringify(e));
  }

  // Empty input
  if (e.parameter == undefined) {
    result = "Empty input query";
    console.log(result);
    output = "Empty query FAIL"
    return ContentService.createTextOutput(output);
  }

  // Determine sheet name
  var sheet_name;
  switch (e.parameter.tag) {
    case 'A':
      sheet_name = "Attributes";
      break;
    case 'P':
      sheet_name = "Parameters";
      break;
    case 'S':
      sheet_name = "Statistics";
      break;
    case 'T':
      sheet_name = "Telemetry";
      break;
    default:
      result = "Uknown tag: " + e.parameter.tag;
      console.log(result);
      output = "Uknown tag FAIL"
      return ContentService.createTextOutput(output);
  }

  // Determine sheet
  console.log("Target sheet: " + sheet_name);
  var sheet = SpreadsheetApp.openById(sheet_id).getSheetByName(sheet_name);

  // Clear sheet
  if (e.parameter.clearData === 'true') {
    sheet.getRange(2, 1, sheet.getLastRow(), sheet.getLastColumn()).clearContent();
    result = "All data cleared in sheet " + sheet_name;
    console.log(result);
    output = "Cleared and ";
  }

  // Prepare row for sheet
  var newRow = sheet.getLastRow() + 1;
  var rowData = [];
  d=new Date();
  rowData[0] = d; // Date in column A
  rowData[1] = d.toLocaleTimeString(); // Time in column B
  for (var param in e.parameter) {
    console.log(param + ': ' + e.parameter[param]);
    var value = stripQuotes(e.parameter[param]);
    switch (param) {
      case 'tag':
        rowData[2] = value;
        break;
      case 'key':
        rowData[3] = value;
        break;
      case 'value':
        rowData[4] = value;
        break;
    }
  }

  // Write new row to sheet
  console.log(JSON.stringify(rowData));
  var newRange = sheet.getRange(newRow, 1, 1, rowData.length);
  newRange.setValues([rowData]);
  result = 'Published data OK';
  console.log(result);
  output += result;
  return ContentService.createTextOutput(output);
}

function stripQuotes( value ) {
  return value.replace(/^["']|['"]$/g, "");
}
