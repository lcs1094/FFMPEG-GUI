
// FFMPEG-GUI.h : PROJECT_NAME ���� ���α׷��� ���� �� ��� �����Դϴ�.
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"		// �� ��ȣ�Դϴ�.


// CFFMPEGGUIApp:
// �� Ŭ������ ������ ���ؼ��� FFMPEG-GUI.cpp�� �����Ͻʽÿ�.
//

class CFFMPEGGUIApp : public CWinApp
{
public:
	CFFMPEGGUIApp();

// �������Դϴ�.
public:
	virtual BOOL InitInstance();

// �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};

extern CFFMPEGGUIApp theApp;