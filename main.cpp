// OnlyOffice Document Builder
#include <docbuilder.h>

int main(int argc, char* argv[])
{
    using namespace NSDoctRenderer;
    CDocBuilder::Initialize(L"/opt/onlyoffice/documentbuilder");
    {
      CDocBuilder oBuilder;
      oBuilder.SetProperty("--work-directory", L"/opt/onlyoffice/documentbuilder");
      oBuilder.CreateFile(L"xlsx");
      oBuilder.SaveFile(L"pdf", L"xlsx.pdf");
    }
    {
      CDocBuilder oBuilder;
      oBuilder.SetProperty("--work-directory", L"/opt/onlyoffice/documentbuilder");
      oBuilder.CreateFile(L"docx");
      oBuilder.SaveFile(L"pdf", L"docx.pdf");
    }
    CDocBuilder::Dispose();
}

