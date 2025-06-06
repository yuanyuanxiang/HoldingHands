#ifndef FILEDOWNLOADER_COMMON_H
#define FILEDOWNLOADER_COMMON_H


#define FILEDOWNLOADER_FLAG_RUNAFTERDOWNLOAD (0x1)
#define MINIDOWNLOAD	('M'|('N'<<8)|('D'<<16)|('D'<<24))


enum FILE_DOWNLOADER_EVENT
{
	MNDD_GET_FILE_INFO,
	MNDD_FILE_INFO,
	MNDD_DOWNLOAD_CONTINUE,
	MNDD_DOWNLOAD_RESULT,
	MNDD_DOWNLOAD_END
};

#endif