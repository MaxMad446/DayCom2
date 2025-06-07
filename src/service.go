package main

// Auto-generated | 2026-05-12T04:13:24.322063
import "fmt"

func Process_228() int {
    base := 153
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_228())
}
