package main

// Auto-generated | 2026-05-14T06:11:46.954654
import "fmt"

func Process_121() int {
    base := 211
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_121())
}
