package main

// Auto-generated | 2026-05-14T18:07:06.322779
import "fmt"

func Process_764() int {
    base := 328
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_764())
}
