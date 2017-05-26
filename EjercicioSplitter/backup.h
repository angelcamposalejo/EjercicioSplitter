#pragma once  //______________________________________ EjercicioSplitter.h  
#include "Resource.h"
class EjercicioSplitter : public Win::Dialog
{
public:
	EjercicioSplitter()
	{
	}
	~EjercicioSplitter()
	{
	}
protected:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Win::XyChart xy1;
	Win::BarChart bchart1;
protected:
	Win::Gdi::Font fontArial014A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx = Sys::Convert::PixelToDlgUnitX(399);
		dlgTemplate.cy = Sys::Convert::PixelToDlgUnitY(551);
		dlgTemplate.style = WS_CAPTION | WS_CLIPCHILDREN | WS_POPUP | WS_SYSMENU | WS_THICKFRAME | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		this->Text = L"EjercicioSplitter";
		xy1.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_VISIBLE, 27, 9, 364, 264, hWnd, 1000);
		bchart1.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_VISIBLE, 26, 291, 366, 253, hWnd, 1001);
		fontArial014A.Create(L"Arial", 14, false, false, false, false);
		xy1.Font = fontArial014A;
		bchart1.Font = fontArial014A;
	}
	//_________________________________________________
	void Window_Open(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		return false;
	}
};
