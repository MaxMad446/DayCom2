package main

// Auto-generated | 2026-05-12T03:58:10.922394
import "fmt"

func Process_787() int {
    base := 226
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_787())
}
