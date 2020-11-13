package main

// Auto-generated | 2026-05-12T19:59:23.175608
import "fmt"

func Process_661() int {
    base := 457
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_661())
}
