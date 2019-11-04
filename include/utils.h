//
// Created by Yuanjun Xiong on 18/11/2015.
//

#ifndef DENSEFLOW_UTILS_H
#define DENSEFLOW_UTILS_H

#include "common.h"

void SplitString(const std::string &s, std::vector<std::string> &v, const std::string &c);

double CurrentSeconds();

void createFile(const path &ph);

inline bool fileExists(const string &name) {
    struct stat info;
    return stat(name.c_str(), &info) == 0;
}

inline bool dirExists(const string &path) {
    struct stat info;
    return stat(path.c_str(), &info) == 0 && (info.st_mode & S_IFDIR);
}

#endif // DENSEFLOW_UTILS_H
