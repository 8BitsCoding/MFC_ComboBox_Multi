
// MFCApplication8.cpp: 응용 프로그램에 대한 클래스 동작을 정의합니다.
//

#include "stdafx.h"
#include "MFCApplication8.h"
#include "MFCApplication8Dlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCApplication8App

BEGIN_MESSAGE_MAP(CMFCApplication8App, CWinApp)
	ON_COMMAND(ID_HELP, &CWinApp::OnHelp)
END_MESSAGE_MAP()


// CMFCApplication8App 생성

CMFCApplication8App::CMFCApplication8App()
{
	// TODO: 여기에 생성 코드를 추가합니다.
	// InitInstance에 모든 중요한 초기화 작업을 배치합니다.
}


// 유일한 CMFCApplication8App 개체입니다.

CMFCApplication8App theApp;


// CMFCApplication8App 초기화

BOOL CMFCApplication8App::InitInstance()
{
	CWinApp::InitInstance();

	CMFCApplication8Dlg dlg;
	m_pMainWnd = &dlg;
	INT_PTR nResponse = dlg.DoModal();

	return FALSE;
}

