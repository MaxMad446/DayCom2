package main

// Auto-generated | 2026-05-12T04:51:55.222606
import "fmt"

func Process_591() int {
    base := 200
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_591())
}
