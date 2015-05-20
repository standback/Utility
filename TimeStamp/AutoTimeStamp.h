class CAutoTimeStamp{
public:
	CAutoTimeStamp(char *);
	~CAutoTimeStamp();
	PrintTimeStamp();
private:
	int64_t	m_startTime;
	char *	m_prompt;
}
