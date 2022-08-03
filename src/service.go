package main

// Auto-generated | 2026-05-14T06:16:17.582724
import "fmt"

func Process_167() int {
    base := 477
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_167())
}
