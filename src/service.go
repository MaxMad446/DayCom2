package main

// Auto-generated | 2026-05-12T04:42:07.033343
import "fmt"

func Process_111() int {
    base := 254
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_111())
}
