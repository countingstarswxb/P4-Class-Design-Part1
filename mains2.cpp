#include "metadata.h"
#include <iostream>


metadata::metadata (std::string fileName, std::string imageType,std::string mdate,double mbSize, std::string authorName, int imageDimension,
        std::string apertureSize, std::string exposureTime, int isoValue,
        bool flashEnabled)
            :_fileName{fileName},_imageType{imageType},_mdate{mdate},_mbSize{mbSize},_authorName{authorName},_imageDimension{imageDimension},
            _apertureSize{apertureSize},_exposureTime{exposureTime},_isoValue{isoValue},_flashEnabled{flashEnabled}{}
        
std::string metadata::getFileName(){
    return _fileName;
}

void metadata::setImageType(std::string imageType){
    if (imageType == "PNG" || imageType == "GIF" ||imageType == "JPEG")
    {
        _imageType=imageType;
    }
    else
        std::cout << "Image type is not valid"<< std::endl;
}
std::string metadata::getImageType(){
    return _imageType; 
}

std::string metadata::getmDate(){
    return _mdate;
}
double metadata::getMbSize(){
    return _mbSize;
}
std::string metadata::getAuthorName(){
    return _authorName;
}
int metadata::getImageDimension(){
    return _imageDimension;
}
std::string metadata::getApertureSize(){
    return _apertureSize;
}
std::string metadata::getExposureTime(){
    return _exposureTime;
}
int metadata::getisoValue(){
    return _isoValue;
}
bool metadata::getFlashEnabled(){
    return _flashEnabled;
}

void printMetadataInformation(metadata metadata)
{
std::cout << "File Name: " << metadata.getFileName() << std::endl
<< "Image Type: " << metadata.getImageType() << std::endl
<< "Date created on: " << metadata.getmDate() << std::endl
<< "Size in MB: " << metadata.getMbSize() << std::endl
<< "Author Name: " << metadata.getAuthorName() << std::endl
<< "Image Dimensions: " << metadata.getImageDimension() << std::endl
<< "Aperture Size: " << metadata.getApertureSize() << std::endl
<< "Exposure time: " << metadata.getExposureTime() << std::endl
<< "ISO value: " << metadata.getisoValue() << std::endl
<< "Flash enabled: " << metadata.getFlashEnabled();


}


int main()
{
    metadata data{"Cat","PNG","02102022",30,"JIMMY",300600,"f/80","1/30",600,true};

    data.setImageType("exe");



    printMetadataInformation(data);
    
}