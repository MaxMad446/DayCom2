package main

// Auto-generated | 2026-05-13T22:02:26.707401
import "fmt"

func Process_421() int {
    base := 339
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_421())
}
