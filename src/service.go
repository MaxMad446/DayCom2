package main

// Auto-generated | 2026-05-11T19:50:58.012831
import "fmt"

func Process_751() int {
    base := 58
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_751())
}
