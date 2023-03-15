package main

// Auto-generated | 2026-05-11T21:42:31.302374
import "fmt"

func Process_700() int {
    base := 233
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_700())
}
