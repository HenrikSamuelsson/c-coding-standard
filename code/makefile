all: main_program \
 rule_001_compliant \
 rule_001_non_compliant \
 rule_002_non_compliant \
 rule_003_non_compliant \
 rule_011_non_compliant \
 doxy_rule_006_compliant

main_program: main.c
	gcc -o main_program main.c -std=c99 -Wall -pedantic

rule_001_compliant: ./rule-001/rule_001_compliant.c
	gcc -o ./bin/rule_001_compliant ./rule-001/rule_001_compliant.c -std=c99 -Wall -pedantic

rule_001_non_compliant: ./rule-001/rule_001_non_compliant.c
	gcc -o ./bin/rule_001_non_compliant ./rule-001/rule_001_non_compliant.c -std=c99 -Wall -pedantic

riule_002_compliant: rule_002_compliant.c
	gcc -o ./bin/rule_002_compliant rule_002_compliant.c -std=c99 -Wall -pedantic

rule_002_non_compliant: rule_002_non_compliant.c
	gcc -o ./bin/rule_002_non_compliant rule_002_non_compliant.c -std=c99 -Wall -pedantic

rule_003_non_compliant: rule_003_non_compliant.c
	gcc -o ./bin/rule_003_non_compliant rule_003_non_compliant.c -std=c99 -Wall -pedantic

rule_011_non_compliant: ./coding-rules/rule-011/rule-011-non-compliant.c
	gcc -o ./bin/rule-011-non-compliant ./coding-rules/rule-011/rule-011-non-compliant.c -std=c99 -Wall -pedantic

doxy_rule_006_compliant: doxy-rules/doxy-rule-006-compliant.c
	gcc -o ./bin/doxy_rule_006_compliant doxy-rules/doxy-rule-006-compliant.c -std=c99 -Wall -pedantic
