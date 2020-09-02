package main

// Auto-generated | 2026-05-11T19:41:42.561474
import "fmt"

func Process_786() int {
    base := 401
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_786())
}
