const fs = require('fs');
module.exports =
  fs.existsSync(__dirname + '/build/Release/mongodb_crypt_library_dummy.node') ?
  __dirname + '/build/Release/mongodb_crypt_library_dummy.node' :
  __dirname + '/build/Debug/mongodb_crypt_library_dummy.node';
