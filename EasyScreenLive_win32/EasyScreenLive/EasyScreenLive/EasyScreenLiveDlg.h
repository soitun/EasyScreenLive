
// EasyScreenLiveDlg.h : ͷ�ļ�
//

#pragma once

#include "../bin/libEasyScreenLiveAPI.h"
#pragma comment(lib, "../bin/libEasyScreenLive.lib")

#define MAX_CHANNEL_NUM 1

// CEasyScreenLiveDlg �Ի���
class CEasyScreenLiveDlg : public CDialogEx
{
// ����
public:
	CEasyScreenLiveDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_EasyScreenLive_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��

// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
	
private:
	EASYSLIVE_HANDLE m_pusher;
	BOOL m_bCapture;
	BOOL m_bPushing;
	BOOL m_bPublishServer;

public:
	afx_msg void OnBnClickedButtonCapture();
	afx_msg void OnBnClickedButtonPush();
	afx_msg void OnBnClickedButtonStop();

	afx_msg void OnDestroy();
	afx_msg void OnCbnSelchangeComboPushsource();
	afx_msg void OnBnClickedButtonPublishServer();
	void OnLog(CString sLog);


};