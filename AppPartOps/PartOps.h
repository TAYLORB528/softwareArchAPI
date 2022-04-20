#pragma once
#include "AppPartOpsExports.h"
#include <string>
#include "..\Core\GuidObject.h"
#include "../AutomationBinding/AutomationAPI_Part.h"
#include "../AutomationBinding/PartBuilder.h"


namespace Application
{
	class APPPARTOPS_API PartFile : public GuidObject
	{
	public:
		static PartFile* CreatePartFile(std::string partFilePath);
		static PartFile* OpenPartFile(std::string partFilePath);
		void SavePart();
		void ClosePart();
		void MakeWidgetFeature(bool option1, int values);

	private:
		PartFile(std::string partFilePath, int guid);
		std::string m_partFilePath;
	};
}

extern APPPARTOPS_API AutomationAPI::PartBuilder* Journaling_CreatePart(AutomationAPI::Part* part);




