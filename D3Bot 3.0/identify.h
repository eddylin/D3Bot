vector<int> Item_x;
vector<int> Item_y;
void BotIdentifyItems();
int BotGetInventaryInfo(int slot_y, int slot_x);
int FindIdentifyColor(BITMAPCAPTURE *grab);
int FindLegendaryItems(BITMAPCAPTURE *grab);
int FindUsefulItems(BITMAPCAPTURE *grab);
int BotTemplateMatch(int slot_x, int slot_y, IplImage *Source, IplImage *TemplateImage, int start_x, int start_y, int end_x, int end_y);
int identify;
IplImage *IdentifyImageEmptySlots;
IplImage *IdentifyImageItemsToStash;

extern void BotSleep(int type, int perem1, int perem2, int perem3, int perem4, int perem5, int perem6, int perem7, int perem8, int perem9, int perem10, int perem11, int sleeptime);
extern char currentPath[_MAX_PATH];
extern void BotGetScreenPng();
extern HBITMAP membit;
extern __int64 calcImageHash(IplImage* src, bool show_results);
extern IplImage * GetIplImage(HBITMAP HBM);
extern __int64 calcHammingDistance(__int64 x, __int64 y);
extern int found;
extern int x,y,rx,ry;
extern void SetCursorPosition(int x,int y);
extern BITMAPCAPTURE globalscreengrab;
extern BOOL CaptureScreen(BITMAPCAPTURE *bmpCapture);
extern void logprint(std::string text, int ignore);
extern int itemvalue_arhonts;
extern int itemvalue_yellow;
extern int itemvalue_rings;
extern int itemvalue_amulets;