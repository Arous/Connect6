
// Connect6Ai.h : PROJECT_NAME ���� ���α׷��� ���� �� ��� �����Դϴ�.
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"		// �� ��ȣ�Դϴ�.


// CConnect6AiApp:
// �� Ŭ������ ������ ���ؼ��� Connect6Ai.cpp�� �����Ͻʽÿ�.
//

class CConnect6AiApp : public CWinApp
{
public:
	CConnect6AiApp();

// �������Դϴ�.
public:
	virtual BOOL InitInstance();

// �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};

extern CConnect6AiApp theApp;