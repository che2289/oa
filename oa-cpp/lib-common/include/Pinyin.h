#pragma once
#ifndef _PINYIN_H_
#define _PINYIN_H_

#include <string>
using std::string;

//功能：将汉字转换成拼音全拼
//例如将 “妈ma521”转换成“mama521”
class Pinyin {
public:
    Pinyin();
    ~Pinyin();
    //汉字转拼音的主函数
    //ChineseTemp: 输入的汉字字符串
    //PinYin: 输出的拼音字符串
    void GetPinYin(string ChineseStr, string& PinYin);
    void GetOtherCodePinYin(int nCode, string& strValue);
private:
    string* pinyin;
    int* code_qw;
};

#endif // _PINYIN_H_

