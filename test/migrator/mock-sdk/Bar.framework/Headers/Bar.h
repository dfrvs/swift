int barFunc1(int a);

int redeclaredInMultipleModulesFunc1(int a);

int barGlobalFunc(int a);

int barGlobalVariable = 1;

@interface BarForwardDeclaredClass
- (void) barInstanceFunc0;
@end

enum BarForwardDeclaredEnum {
  BarForwardDeclaredEnumValue = 42
};

#define BAR_MACRO_1 0

typedef struct {
  int count;
  int theSimpleOldName;
} SomeItemSet;

typedef SomeItemSet SomeEnvironment;
