#pragma once
#include <string>


class metadata{
    private:
    std::string _fileName;
    std::string _imageType;
    std::string _mdate;
    double _mbSize;
    std::string _authorName;
    int _imageDimension;
    std::string _apertureSize;
    std::string _exposureTime;
    int _isoValue;
    bool _flashEnabled;

    public:
    metadata(std::string fileName, std::string imageType,std::string mdate,double mbSize, std::string authorName, int imageDimension,
        std::string apertureSize, std::string exposureTime, int isoValue,
        bool flashEnabled );
    std::string getFileName();
    std::string getImageType();
    void setImageType(std::string imageType);
    std::string getmDate();
    double getMbSize();
    std::string getAuthorName();
    int getImageDimension();
    std::string getApertureSize();
    std::string getExposureTime();
    int getisoValue();
    bool getFlashEnabled();   
};

void printMetadataInformation(metadata metadata);