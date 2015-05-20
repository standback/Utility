#include <iostream>
#include <AutoTimeStamp.h>
CAutoTimeStamp::CAutoTimeStammp(char * prompt)
{
	m_prompt = NULL;
	if (prompt)
	{
		m_prompt = new char[strlen(prompt)+1]{0};
		memcpy(m_prompt, prompt, strlen(prompt)+1);
	}
	m_startTime = getTime();
	cout <<"|||"<< m_prompt<<"|"<<__FILE__<<"|"<<__FUNCTION__<<"|"<<__LINE__<<"|||START	:"<<m_startTime<<endl; 
}
CAutoTimeStamp::~CAutoTimeStamp()
{
	int64_t tNow = getTime()
	if (m_prompt)
		delete m_prompt;
	cout <<"|||"<< m_prompt<<"|"<<__FILE__<<"|"<<__FUNCTION__<<"|"<<__LINE__<<"|||END	:"<<tNow<<"("<<tNow<<")"<<endl; 
}
}
void CAutoTimeStamp::PrintTimeStamp()
{
	int64_t tNow = getTime()
	cout <<"|||"<< m_prompt<<"|"<<__FILE__<<"|"<<__FUNCTION__<<"|"<<__LINE__<<"|||TimeStamp	:"<<tNow<<"("<<tNow<<")"<<endl; 
}

int64_t getTime()
{

}
