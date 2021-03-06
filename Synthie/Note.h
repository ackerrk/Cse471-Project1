#pragma once
#include <string>
#include "xmlhelp.h"
using namespace std;
class CNote
{
public:
	CNote();
	~CNote();

	int Measure() const { return m_measure; }

	double Beat() const { return m_beat; }

	const std::wstring &Instrument() const { return m_instrument; }
	const std::wstring& Waveform() const { return mWaveform; }

	IXMLDOMNode *Node() { return m_node; }

	void CNote::XmlLoad(IXMLDOMNode * xml, std::wstring & instrument, std::wstring& waveform);

	bool CNote::operator<(const CNote &b);

	

private:
	std::wstring m_instrument;
	std::wstring mWaveform;
	int m_measure;
	double m_beat;
	CComPtr<IXMLDOMNode> m_node;
};

