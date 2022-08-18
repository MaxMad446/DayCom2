package main

// Auto-generated | 2026-05-14T06:17:32.473486
import "fmt"

func Process_785() int {
    base := 70
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_785())
}
