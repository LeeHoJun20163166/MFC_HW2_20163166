
// HW2_20163166View.cpp: CHW220163166View 클래스의 구현
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS는 미리 보기, 축소판 그림 및 검색 필터 처리기를 구현하는 ATL 프로젝트에서 정의할 수 있으며
// 해당 프로젝트와 문서 코드를 공유하도록 해 줍니다.
#ifndef SHARED_HANDLERS
#include "HW2_20163166.h"
#endif

#include "HW2_20163166Doc.h"
#include "HW2_20163166View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CHW220163166View

IMPLEMENT_DYNCREATE(CHW220163166View, CView)

BEGIN_MESSAGE_MAP(CHW220163166View, CView)
	// 표준 인쇄 명령입니다.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CHW220163166View 생성/소멸

CHW220163166View::CHW220163166View() noexcept
{
	// TODO: 여기에 생성 코드를 추가합니다.

}

CHW220163166View::~CHW220163166View()
{
}

BOOL CHW220163166View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs를 수정하여 여기에서
	//  Window 클래스 또는 스타일을 수정합니다.

	return CView::PreCreateWindow(cs);
}

// CHW220163166View 그리기

void CHW220163166View::OnDraw(CDC* /*pDC*/)
{
	CHW220163166Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 여기에 원시 데이터에 대한 그리기 코드를 추가합니다.
}


// CHW220163166View 인쇄

BOOL CHW220163166View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 기본적인 준비
	return DoPreparePrinting(pInfo);
}

void CHW220163166View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 인쇄하기 전에 추가 초기화 작업을 추가합니다.
}

void CHW220163166View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 인쇄 후 정리 작업을 추가합니다.
}


// CHW220163166View 진단

#ifdef _DEBUG
void CHW220163166View::AssertValid() const
{
	CView::AssertValid();
}

void CHW220163166View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CHW220163166Doc* CHW220163166View::GetDocument() const // 디버그되지 않은 버전은 인라인으로 지정됩니다.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CHW220163166Doc)));
	return (CHW220163166Doc*)m_pDocument;
}
#endif //_DEBUG


// CHW220163166View 메시지 처리기
