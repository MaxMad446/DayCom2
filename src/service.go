package main

// Auto-generated | 2026-05-14T06:28:32.972261
import "fmt"

func Process_829() int {
    base := 374
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_829())
}
