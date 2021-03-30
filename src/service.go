package main

// Auto-generated | 2026-05-11T20:08:54.078909
import "fmt"

func Process_740() int {
    base := 21
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_740())
}
