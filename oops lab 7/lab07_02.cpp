#include<iostream>
using namespace std;
class Image{
    protected:
    double height;
    double width;
    public:
        Image(double h,double w){
            height = h;
            width = w;
        }
};
class CompressedImage : public Image{
    protected:
        double CompressionRatio;
    public:
        CompressedImage(double h,double w,double c):Image(h,w){
            CompressionRatio = c;
        }
};
class EncryptedImage : public CompressedImage{
    private:
        string algorithm;
    public:
        EncryptedImage(int h, int w,double c,string algo):CompressedImage(h,w,c){
            algorithm = algo;
        }
        void display(){
            int originalPixels = width * height;
            double effectivePixels = originalPixels * CompressionRatio/100.0;
            cout<<"image width : "<<width<<endl;
            cout<<"Image height : "<<height<<endl;
            cout<<"Original pixels : "<<originalPixels;
            cout<<"Compression ratio : "<<CompressionRatio<<endl;
            cout<<"Effective Pixel equivalent : "<<effectivePixels<<endl;
            cout<<"Encryption Algo : "<<algorithm<<endl;
        }
};
int main(){
    EncryptedImage img(1920,1080,50,"AES");
    img.display();
    return 0;
}