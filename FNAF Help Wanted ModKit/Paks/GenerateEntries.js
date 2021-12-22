const fs = require('fs');
const path = require('path');

const getFiles = function(dir, files) {
    var all = fs.readdirSync(dir);

    files = files || []
  
    all.forEach((file) => {
        if (fs.statSync(dir + '/' + file).isDirectory())
            files = getFiles(dir + '/' + file, files);
        else
            files.push(path.join(__dirname, dir, '/', file));
    });
  
    return files;
}

const DIRECTORY = 'Data';
const FILES = getFiles(DIRECTORY);

for (var index = 0; index < FILES.length; index++) {
    const name = FILES[index];
    const pak = name
        .replace(__dirname + '\\' + DIRECTORY, '../../..')
        .replace(/\\/g, '/');
    
    console.log(`"${name}" "${pak}"`);
}