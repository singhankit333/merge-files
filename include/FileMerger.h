#ifndef FILEMERGER_H
#define FILEMERGER_H

#include <string>

class FileMerger {
public:
    void mergeFiles(const std::string& inputDir, const std::string& outputFile);
};

#endif // FILEMERGER_H