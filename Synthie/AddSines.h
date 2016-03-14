#pragma once
#include "AudioNode.h"
#include <vector>
using namespace std;

class CAddSines :
	public CAudioNode
{
public:
	CAddSines();
	~CAddSines();

public:
	virtual void Start();
	virtual bool Generate();

	void SetFreq(double f){ m_freq = f; }
	void SetAmplitude(double a) { m_amp= a; }

private:
	double m_freq; //fundamental freq
	double m_phase; //phase shift
	double m_amp; //fundamental amplitude
	vector<double> m_harmonics; //list of harmonics wanted to be added together
};

