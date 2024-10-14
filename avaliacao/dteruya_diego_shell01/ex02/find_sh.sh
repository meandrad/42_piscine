find . -type d,f -name '*.sh' | sed 's|.*\/||' | sed 's|\.sh||'
