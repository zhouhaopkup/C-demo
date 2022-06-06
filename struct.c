#include <stdio.h>
#include "io_utils.h"

int main() {

//    struct Person {
//        char *name;
//        int age;
//        char *id;
//    };
//
//    struct Person person = {.name = "lisi", .id = "0000032321312"};
//    person.age = 19;
//    PRINT_INT(person.age);
//
//    struct {
//        char *name;
//        int age;
//        char *id;
//
//    } anonymous_person;
//
//    struct Person *person_ptr = &person;
//    PRINT_INT(person_ptr -> age);
//
//    PRINT_INT(sizeof(struct Person));
//    PRINT_INT(sizeof(person));
//
//    typedef struct Person Person;
//
//    Person person1 = {'andrew', .age = 20};

    typedef struct Company {
        char *name;
        char *id;
        char *location;
    } Company;

    typedef struct Person {
        char *name;
        int age;
        char *id;
        Company *company;
        Company company2;
        struct {
            int extra;
            char *extra_str;
        } extra_value;
        struct Person *partner;
    } Person;

    Company company = {.name="apple", .id="000001", };
    Person person = {.name="lisi", .id="4324324324", .company=&company, .company2={.name="san star", .id="0000002"}};

    // person.company->name

    // person.extra_value.extra

    return 0;
}