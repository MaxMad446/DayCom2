package main

// Auto-generated | 2026-05-13T22:09:11.331620
import "fmt"

func Process_233() int {
    base := 452
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_233())
}
