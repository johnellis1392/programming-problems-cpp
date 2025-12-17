build:
	@bazel build //leetcode:hello-world

run:
	@./bazel-bin/leetcode/hello-world

test:
	@bazel test --cxxopt=-std=c++17 --test_output=all //leetcode:hello_test
