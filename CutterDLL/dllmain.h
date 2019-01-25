// dllmain.h: объявление класса модуля.

class CCutterDLLModule : public ATL::CAtlDllModuleT< CCutterDLLModule >
{
public :
	DECLARE_LIBID(LIBID_CutterDLLLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_CUTTERDLL, "{0759412f-522d-4816-a5c4-b05d77b12b7d}")
};

extern class CCutterDLLModule _AtlModule;
