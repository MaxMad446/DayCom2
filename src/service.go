package main

// Auto-generated | 2026-05-11T19:35:14.698187
import "fmt"

func Process_777() int {
    base := 425
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_777())
}
