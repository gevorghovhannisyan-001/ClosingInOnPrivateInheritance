#ifndef CIVIL_ENGINEER_H
#define CIVIL_ENGINEER_H

#include "engineer.h"
#include<string>

class CivilEngineer : public Engineer
{
	friend std::ostream& operator<<(std::ostream&, const CivilEngineer& operand);
public:
    CivilEngineer();
    ~CivilEngineer();

    void build_road() {
       /* get_full_name();
        m_address{ "ajdkfj" };*/
    }
private:
    std::string m_specialty{ "None" };
};

#endif // CIVIL_ENGINEER_H