package main

// Auto-generated | 2026-05-14T06:14:58.134845
import "fmt"

func Process_407() int {
    base := 60
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_407())
}
