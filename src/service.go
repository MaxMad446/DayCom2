package main

// Auto-generated | 2026-05-13T20:59:19.991954
import "fmt"

func Process_850() int {
    base := 36
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_850())
}
