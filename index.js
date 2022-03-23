const fs = require('fs');
module.exports =
  fs.existsSync(__dirname + '/build/Release/mongodb_csfle_library_dummy.node') ?
  __dirname + '/build/Release/mongodb_csfle_library_dummy.node' :
  __dirname + '/build/Debug/mongodb_csfle_library_dummy.node';
