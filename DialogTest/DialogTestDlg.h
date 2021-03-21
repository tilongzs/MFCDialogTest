#pragma once
#include <functional>
using namespace std;

class CDialogTestDlg : public CDialogEx
{
public:
	CDialogTestDlg(CWnd* pParent = nullptr);

#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOGTEST_DIALOG };
#endif

	struct TheadFunc
	{
		function<void()> Func;
	};

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);


protected:
	HICON m_hIcon;
	CEdit _editMsg;

	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()


	void AppendMsg(const WCHAR* msg);
	LRESULT OnFunction(WPARAM wParam, LPARAM lParam);
public:
	afx_msg void OnBnClickedButton1();
};
