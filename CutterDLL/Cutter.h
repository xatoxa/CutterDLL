// Cutter.h: объявление CCutter

#pragma once
#include "resource.h"       // основные символы



#include "CutterDLL_i.h"



#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Однопотоковые COM-объекты не поддерживаются должным образом платформой Windows CE, например платформами Windows Mobile, в которых не предусмотрена полная поддержка DCOM. Определите _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA, чтобы принудить ATL поддерживать создание однопотоковых COM-объектов и разрешить использование его реализаций однопотоковых COM-объектов. Для потоковой модели в вашем rgs-файле задано значение 'Free', поскольку это единственная потоковая модель, поддерживаемая не-DCOM платформами Windows CE."
#endif

using namespace ATL;


// CCutter

class ATL_NO_VTABLE CCutter :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CCutter, &CLSID_Cutter>,
	public IDispatchImpl<ICutter, &IID_ICutter, &LIBID_CutterDLLLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CCutter()
	{
	}

DECLARE_REGISTRY_RESOURCEID(106)


BEGIN_COM_MAP(CCutter)
	COM_INTERFACE_ENTRY(ICutter)
	COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()



	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct()
	{
		return S_OK;
	}

	void FinalRelease()
	{
	}

public:

	STDMETHODIMP CCutter::Cut_image(HBITMAP* image, unsigned int* x1, unsigned int* y1, unsigned int* x2, unsigned int* y2, HBITMAP* out_image);

};

OBJECT_ENTRY_AUTO(__uuidof(Cutter), CCutter)
