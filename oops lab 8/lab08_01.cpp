#include<iostream>
using namespace std;
class Document{
    public:
        virtual void exporting(){
            cout<<"Exporting document..."<<endl;
        }
};
class PDFDocument : public Document{
    public:
        void exporting() override{
            cout<<"Exporting PDF document(.pdf)"<<endl;
        }
};
class TextDocument : public Document{
    public:
        void exporting() override{
            cout<<"Exporting Text document(.txt)"<<endl;
        }
};
class CSVDocument : public Document{
    public:
        void exporting() override{
            cout<<"Exporting CSV document(.csv)"<<endl;
        }
};
int main(){
    PDFDocument pdf;
    TextDocument txt;
    CSVDocument csv;
    Document *ptr;
    ptr = &pdf;
    ptr->exporting();
    ptr = &txt;
    ptr->exporting();
    ptr = &csv;
    ptr->exporting();
    return 0;
}
