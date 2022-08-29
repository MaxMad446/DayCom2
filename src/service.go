package main

// Auto-generated | 2026-05-11T21:17:02.023912
import "fmt"

func Process_111() int {
    base := 39
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_111())
}
